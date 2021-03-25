#include <libFreeAssange/free_assange.hpp>

#include <catch2/catch.hpp>

TEST_CASE("Some demo test", "[demo]")
{
    free_assange::doIt();

    // We need to get the answer to all of our questions
    REQUIRE(42 == 42);
}