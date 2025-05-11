#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class EDOTADraftTriviaAnswerResult : std::uint32_t
        {
            k_EDOTADraftTriviaAnswerResult_Success = 0x0,
            k_EDOTADraftTriviaAnswerResult_InvalidMatchID = 0x1,
            k_EDOTADraftTriviaAnswerResult_AlreadyAnswered = 0x2,
            k_EDOTADraftTriviaAnswerResult_InternalError = 0x3,
            k_EDOTADraftTriviaAnswerResult_TriviaDisabled = 0x4,
            k_EDOTADraftTriviaAnswerResult_GCDown = 0x5,
        };
    };
};
