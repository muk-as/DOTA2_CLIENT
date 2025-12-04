#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // static metadata: MNetworkVarNames "uint8 m_nLod"
        #pragma pack(push, 1)
        class C_NextBotCombatCharacter : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            source2sdk::client::CountdownTimer m_shadowTimer; // 0x_            
            bool m_bInFrustum; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nInFrustumFrame; // 0x_            
            float m_flFrustumDistanceSqr; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_nLod; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NextBotCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NextBotCombatCharacter) == 0x_);
    };
};
