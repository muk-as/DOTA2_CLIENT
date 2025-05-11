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
        // Size: 0xa30
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "uint8 m_nLod"
        #pragma pack(push, 1)
        class C_NextBotCombatCharacter : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            source2sdk::client::CountdownTimer m_shadowTimer; // 0xa08            
            bool m_bInFrustum; // 0xa20            
            uint8_t _pad0a21[0x3]; // 0xa21
            std::int32_t m_nInFrustumFrame; // 0xa24            
            float m_flFrustumDistanceSqr; // 0xa28            
            // metadata: MNetworkEnable
            std::uint8_t m_nLod; // 0xa2c            
            uint8_t _pad0a2d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NextBotCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NextBotCombatCharacter) == 0xa30);
    };
};
