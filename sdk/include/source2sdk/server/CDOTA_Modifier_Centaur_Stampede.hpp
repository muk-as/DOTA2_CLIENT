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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Centaur_Stampede : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            std::int32_t damage_reduction; // 0x187c            
            std::int32_t has_flying_movement; // 0x1880            
            uint8_t _pad1884[0x4]; // 0x1884
            // m_hEntitiesAffected has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEntitiesAffected;
            char m_hEntitiesAffected[0x18]; // 0x1888            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Centaur_Stampede because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Centaur_Stampede) == 0x18a0);
    };
};
