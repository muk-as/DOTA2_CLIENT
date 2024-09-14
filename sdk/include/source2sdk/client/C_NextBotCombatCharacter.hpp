#pragma once
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa38
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "uint8 m_nLod"
    #pragma pack(push, 1)
    class C_NextBotCombatCharacter : public client::C_BaseCombatCharacter
    {
    public:
        client::CountdownTimer m_shadowTimer; // 0xa10        
        bool m_bInFrustum; // 0xa28        
        [[maybe_unused]] std::uint8_t pad_0xa29[0x3]; // 0xa29
        int32_t m_nInFrustumFrame; // 0xa2c        
        float m_flFrustumDistanceSqr; // 0xa30        
        // metadata: MNetworkEnable
        uint8_t m_nLod; // 0xa34        
        [[maybe_unused]] std::uint8_t pad_0xa35[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NextBotCombatCharacter because it is not a standard-layout class
    static_assert(sizeof(C_NextBotCombatCharacter) == 0xa38);
};
