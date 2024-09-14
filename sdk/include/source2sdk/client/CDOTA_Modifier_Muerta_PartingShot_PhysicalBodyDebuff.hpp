#pragma once
#include "source2sdk/client/CDOTA_Modifier_Stunned.hpp"
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
    // Size: 0x16f0
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Muerta_PartingShot_PhysicalBodyDebuff : public client::CDOTA_Modifier_Stunned
    {
    public:
        // m_hSoulEntityClient has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSoulEntityClient;
        char m_hSoulEntityClient[0x4]; // 0x16e8        
        int32_t damage_reduction_percent; // 0x16ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_PartingShot_PhysicalBodyDebuff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Muerta_PartingShot_PhysicalBodyDebuff) == 0x16f0);
};
