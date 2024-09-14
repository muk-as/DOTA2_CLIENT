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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_EarthSpirit_Polarization : public client::CDOTA_Buff
    {
    public:
        float damage_per_second; // 0x16e8        
        float damage_interval; // 0x16ec        
        float damage_duration; // 0x16f0        
        int32_t rock_search_radius; // 0x16f4        
        // m_hMagnetizeAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hMagnetizeAbility;
        char m_hMagnetizeAbility[0x4]; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_Polarization because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_EarthSpirit_Polarization) == 0x1700);
};
