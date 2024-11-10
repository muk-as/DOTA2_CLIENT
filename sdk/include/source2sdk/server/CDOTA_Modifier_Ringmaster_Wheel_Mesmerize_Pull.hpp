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
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Pull : public client::CDOTA_Buff
    {
    public:
        float m_fMovementSpeed; // 0x1708        
        // m_hPullTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hPullTarget;
        char m_hPullTarget[0x4]; // 0x170c        
        float think_interval; // 0x1710        
        float mesmerize_radius; // 0x1714        
        float k_flCloseThreshold; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Pull because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Pull) == 0x1720);
};
