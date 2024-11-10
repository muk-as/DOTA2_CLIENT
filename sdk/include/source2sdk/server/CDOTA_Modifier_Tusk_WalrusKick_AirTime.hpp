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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Tusk_WalrusKick_AirTime : public client::CDOTA_Buff
    {
    public:
        int32_t hp_threshold; // 0x1708        
        float m_flStartZ; // 0x170c        
        float m_flCurTime; // 0x1710        
        float m_flOldPitch; // 0x1714        
        QAngle m_qRotation; // 0x1718        
        int32_t m_nRotations; // 0x1724        
        Vector m_vDirection; // 0x1728        
        float m_flEndTime; // 0x1734        
        float push_length; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Tusk_WalrusKick_AirTime because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Tusk_WalrusKick_AirTime) == 0x1740);
};
