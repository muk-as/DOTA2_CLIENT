#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 6
    // Alignment: 4
    // Size: 0x4
    enum class EDOTATriviaAnswerResult : std::uint32_t
    {
        k_EDOTATriviaAnswerResult_Success = 0x0,
        k_EDOTATriviaAnswerResult_InvalidQuestion = 0x1,
        k_EDOTATriviaAnswerResult_InvalidAnswer = 0x2,
        k_EDOTATriviaAnswerResult_QuestionLocked = 0x3,
        k_EDOTATriviaAnswerResult_AlreadyAnswered = 0x4,
        k_EDOTATriviaAnswerResult_TriviaDisabled = 0x5,
    };
};
