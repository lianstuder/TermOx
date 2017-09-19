#ifndef SYSTEM_DETAIL_EVENT_QUEUE_HPP
#define SYSTEM_DETAIL_EVENT_QUEUE_HPP
#include <memory>
#include <vector>

namespace cppurses {
class Event;
namespace detail {

class Event_queue {
   public:
    void append(std::unique_ptr<Event> event);
    friend class Invoker;

   private:
    std::vector<std::unique_ptr<Event>> queue_;
};

}  // namespace detail
}  // namespace cppurses
#endif  // SYSTEM_DETAIL_EVENT_QUEUE_HPP
