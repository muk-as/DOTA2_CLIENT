#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseGameMode.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float m_flEndgameTime"
        #pragma pack(push, 1)
        class C_DOTABotChallengeGameMode : public source2sdk::client::C_DOTABaseGameMode
        {
        public:
            // metadata: MNetworkEnable
            float m_flEndgameTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTABotChallengeGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTABotChallengeGameMode) == 0x_);
    };
};
