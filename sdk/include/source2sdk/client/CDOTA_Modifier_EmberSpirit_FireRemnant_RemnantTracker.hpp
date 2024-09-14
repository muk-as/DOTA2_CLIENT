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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_EmberSpirit_FireRemnant_RemnantTracker : public client::CDOTA_Buff
    {
    public:
        // m_vActiveRemnants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vActiveRemnants;
        char m_vActiveRemnants[0x18]; // 0x16e8        
        // m_vTrackingDelayedRemnants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vTrackingDelayedRemnants;
        char m_vTrackingDelayedRemnants[0x18]; // 0x1700        
        int32_t shard_charge_radius; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_EmberSpirit_FireRemnant_RemnantTracker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_EmberSpirit_FireRemnant_RemnantTracker) == 0x1720);
};
