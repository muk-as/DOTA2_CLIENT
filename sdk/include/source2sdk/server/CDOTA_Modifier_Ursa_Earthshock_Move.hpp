#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ursa_Earthshock_Move : public client::CDOTA_Buff
    {
    public:
        float hop_duration; // 0x16e8        
        int32_t hop_height; // 0x16ec        
        int32_t hop_distance; // 0x16f0        
        float m_flStartZ; // 0x16f4        
        float m_flCurTime; // 0x16f8        
        float m_flJumpDuration; // 0x16fc        
        float m_flJumpHeight; // 0x1700        
        Vector m_vTargetHorizontalDirection; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ursa_Earthshock_Move because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ursa_Earthshock_Move) == 0x1710);
};
