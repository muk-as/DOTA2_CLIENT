#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_Bulwark_Active : public client::CDOTA_Buff
    {
    public:
        int32_t redirect_chance; // 0x16e8        
        int32_t redirect_range; // 0x16ec        
        float forward_angle; // 0x16f0        
        float side_angle; // 0x16f4        
        int32_t redirect_speed_penatly; // 0x16f8        
        int32_t redirect_close_range; // 0x16fc        
        int32_t attack_redirection_grace_distance; // 0x1700        
        int32_t m_nPoseParameterWE; // 0x1704        
        int32_t m_nPoseParameterNS; // 0x1708        
        float m_flLastPoseX; // 0x170c        
        float m_flLastPoseY; // 0x1710        
        int32_t m_nLastMaxDirection; // 0x1714        
        Vector m_vLastOrigin; // 0x1718        
        entity2::GameTime_t m_flLastGameTime; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_Bulwark_Active) == 0x1728);
};
