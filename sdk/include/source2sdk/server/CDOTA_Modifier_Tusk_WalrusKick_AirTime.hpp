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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tusk_WalrusKick_AirTime : public client::CDOTA_Buff
    {
    public:
        int32_t hp_threshold; // 0x16e8        
        float m_flStartZ; // 0x16ec        
        float m_flCurTime; // 0x16f0        
        float m_flOldPitch; // 0x16f4        
        QAngle m_qRotation; // 0x16f8        
        int32_t m_nRotations; // 0x1704        
        Vector m_vDirection; // 0x1708        
        float m_flEndTime; // 0x1714        
        float push_length; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tusk_WalrusKick_AirTime because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tusk_WalrusKick_AirTime) == 0x1720);
};
