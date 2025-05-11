#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spectre_SpectralDaggerPath : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad17f8[0x18]; // 0x17f8
            // m_hUnitsInPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hUnitsInPath;
            char m_hUnitsInPath[0x18]; // 0x1810            
            float path_radius; // 0x1828            
            float vision_radius; // 0x182c            
            float dagger_radius; // 0x1830            
            float buff_persistence; // 0x1834            
            float dagger_grace_period; // 0x1838            
            float dagger_path_duration; // 0x183c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_SpectralDaggerPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Spectre_SpectralDaggerPath) == 0x1840);
    };
};
