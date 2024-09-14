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
    // Size: 0x1708
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
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Active because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_Bulwark_Active) == 0x1708);
};
