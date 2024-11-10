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
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Spectre_SpectralDaggerPath : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x18]; // 0x1708
        // m_hUnitsInPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hUnitsInPath;
        char m_hUnitsInPath[0x18]; // 0x1720        
        int32_t path_radius; // 0x1738        
        int32_t vision_radius; // 0x173c        
        int32_t dagger_radius; // 0x1740        
        float buff_persistence; // 0x1744        
        float dagger_grace_period; // 0x1748        
        float dagger_path_duration; // 0x174c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_SpectralDaggerPath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Spectre_SpectralDaggerPath) == 0x1750);
};
