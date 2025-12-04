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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spectre_SpectralDaggerPath : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_hUnitsInPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hUnitsInPath;
            char m_hUnitsInPath[0x_]; // 0x_            
            float path_radius; // 0x_            
            float vision_radius; // 0x_            
            float dagger_radius; // 0x_            
            float buff_persistence; // 0x_            
            float dagger_grace_period; // 0x_            
            float dagger_path_duration; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_SpectralDaggerPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Spectre_SpectralDaggerPath) == 0x_);
    };
};
