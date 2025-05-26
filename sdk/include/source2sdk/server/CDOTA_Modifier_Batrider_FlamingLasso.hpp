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
        struct CDOTA_BaseNPC;
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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Batrider_FlamingLasso : public source2sdk::client::CDOTA_Buff
        {
        public:
            float tick_rate; // 0x1878            
            std::int32_t drag_distance; // 0x187c            
            std::int32_t break_distance; // 0x1880            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1884            
            Vector vPreviousLocation; // 0x1888            
            // m_hAnchor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hAnchor;
            char m_hAnchor[0x4]; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_FlamingLasso because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Batrider_FlamingLasso) == 0x1898);
    };
};
