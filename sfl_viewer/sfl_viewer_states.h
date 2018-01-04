#ifndef __MAIN_WINDOW_STATES_H__
#define __MAIN_WINDOW_STATES_H__

// Boost
#include <boost/statechart/event.hpp>
#include <boost/statechart/state_machine.hpp>
#include <boost/statechart/state.hpp>
#include <boost/statechart/in_state_reaction.hpp>
#include <boost/statechart/transition.hpp>
#include <boost/statechart/custom_reaction.hpp>
#include <boost/mpl/list.hpp>

// Qt
#include <QtWidgets/QWidget>


namespace sc = boost::statechart;
namespace mpl = boost::mpl;

namespace sfl
{
    // Forward declarations
    struct Inactive;
    struct Active;
    struct Paused;
    struct Playing;
    class Viewer;

    // State Machine 
    struct ViewerSM : sc::state_machine< ViewerSM, Inactive >
    {
        ViewerSM(Viewer* _viewer);
        Viewer* viewer;
    };

    // Events

    struct EvPlayPause : sc::event< EvPlayPause > {};
    struct EvUpdate : sc::event< EvUpdate > {};
    struct EvStart : sc::event< EvStart > {};
    struct EvReset : sc::event< EvReset > {};
    struct EvTimerTick : sc::event< EvTimerTick > {};
    struct EvSeek : sc::event< EvSeek > 
    {
        EvSeek(int _i) : i(_i) {}
        int i;
    };

    // States

    struct Inactive : sc::state<Inactive, ViewerSM>
    {
        Inactive(my_context ctx);

        void onUpdate(const EvUpdate& event);
        sc::result react(const EvStart&);

        typedef mpl::list<
            sc::in_state_reaction<EvUpdate, Inactive, (&Inactive::onUpdate)>,
            sc::custom_reaction< EvStart > > reactions;

        Viewer* viewer;
    };

    struct Active : sc::state<Active, ViewerSM, Paused>
    {
        Active(my_context ctx);

        void onSeek(const EvSeek& event);
        void onStart(const EvStart& event);

        typedef mpl::list<
            sc::in_state_reaction<EvSeek, Active, (&Active::onSeek)>,
            sc::in_state_reaction<EvStart, Active, (&Active::onStart)>,
            sc::transition< EvReset, Inactive > > reactions;

        Viewer* viewer;
    };

    struct Paused : sc::state<Paused, Active>
    {
        Paused(my_context ctx);

        void onUpdate(const EvUpdate& event);

        typedef mpl::list<
            sc::in_state_reaction<EvUpdate, Paused, (&Paused::onUpdate)>,
            sc::transition< EvPlayPause, Playing > > reactions;

        Viewer* viewer;
    };

    // States
    struct Playing : sc::state<Playing, Active>
    {
        Playing(my_context ctx);
        ~Playing();

        void onUpdate(const EvUpdate& event);
        void onTimerTick(const EvTimerTick& event);

        typedef mpl::list<
            sc::in_state_reaction<EvUpdate, Playing, (&Playing::onUpdate)>,
            sc::in_state_reaction<EvTimerTick, Playing, (&Playing::onTimerTick)>,
            sc::transition< EvPlayPause, Paused > > reactions;

        Viewer* viewer;
        int timer_id = 0;
    };
}   // namespace sfl





#endif // __MAIN_WINDOW_STATES_H__