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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc48
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "uint8 m_nLod"
        #pragma pack(push, 1)
        class C_NextBotCombatCharacter : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            source2sdk::client::CountdownTimer m_shadowTimer; // 0xc20            
            bool m_bInFrustum; // 0xc38            
            uint8_t _pad0c39[0x3]; // 0xc39
            std::int32_t m_nInFrustumFrame; // 0xc3c            
            float m_flFrustumDistanceSqr; // 0xc40            
            // metadata: MNetworkEnable
            std::uint8_t m_nLod; // 0xc44            
            uint8_t _pad0c45[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NextBotCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NextBotCombatCharacter) == 0xc48);
    };
};
