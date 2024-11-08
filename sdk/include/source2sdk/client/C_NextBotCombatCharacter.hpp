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
    // Size: 0xa80
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "uint8 m_nLod"
    #pragma pack(push, 1)
    class C_NextBotCombatCharacter : public client::C_BaseCombatCharacter
    {
    public:
        client::CountdownTimer m_shadowTimer; // 0xa58        
        bool m_bInFrustum; // 0xa70        
        [[maybe_unused]] std::uint8_t pad_0xa71[0x3]; // 0xa71
        int32_t m_nInFrustumFrame; // 0xa74        
        float m_flFrustumDistanceSqr; // 0xa78        
        // metadata: MNetworkEnable
        uint8_t m_nLod; // 0xa7c        
        [[maybe_unused]] std::uint8_t pad_0xa7d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NextBotCombatCharacter because it is not a standard-layout class
    static_assert(sizeof(C_NextBotCombatCharacter) == 0xa80);
};
