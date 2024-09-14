#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Spectre_SpectralDaggerPath : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x16e8[0x18]; // 0x16e8
        // m_hUnitsInPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hUnitsInPath;
        char m_hUnitsInPath[0x18]; // 0x1700        
        int32_t path_radius; // 0x1718        
        int32_t vision_radius; // 0x171c        
        int32_t dagger_radius; // 0x1720        
        float buff_persistence; // 0x1724        
        float dagger_grace_period; // 0x1728        
        float dagger_path_duration; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_SpectralDaggerPath because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Spectre_SpectralDaggerPath) == 0x1730);
};
