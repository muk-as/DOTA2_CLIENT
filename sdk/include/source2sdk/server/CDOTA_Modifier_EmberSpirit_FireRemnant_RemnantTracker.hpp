#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1830
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EmberSpirit_FireRemnant_RemnantTracker : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_vActiveRemnants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vActiveRemnants;
            char m_vActiveRemnants[0x18]; // 0x17f8            
            // m_vTrackingDelayedRemnants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vTrackingDelayedRemnants;
            char m_vTrackingDelayedRemnants[0x18]; // 0x1810            
            float shard_charge_radius; // 0x1828            
            uint8_t _pad182c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EmberSpirit_FireRemnant_RemnantTracker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_EmberSpirit_FireRemnant_RemnantTracker) == 0x1830);
    };
};
