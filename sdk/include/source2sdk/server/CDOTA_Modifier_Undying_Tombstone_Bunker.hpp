#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Undying_Tombstone_Bunker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bunker_heal_pct; // 0x1878            
            float tombstone_grab_radius; // 0x187c            
            float tombstone_stun_penalty; // 0x1880            
            // m_hLoadedUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLoadedUnit;
            char m_hLoadedUnit[0x4]; // 0x1884            
            source2sdk::client::ParticleIndex_t m_nBunkerEnterFXIndex; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Undying_Tombstone_Bunker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Undying_Tombstone_Bunker) == 0x1890);
    };
};
