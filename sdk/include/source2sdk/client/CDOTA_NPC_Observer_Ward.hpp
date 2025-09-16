#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
namespace source2sdk
{
    namespace particleslib
    {
        struct CNewParticleEffect;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a58
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_NPC_Observer_Ward : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            std::int32_t m_iDuration; // 0x1a40            
            uint8_t _pad1a44[0x4]; // 0x1a44
            source2sdk::particleslib::CNewParticleEffect* m_pVisionRangeFX; // 0x1a48            
            std::int32_t m_nPreviewViewer; // 0x1a50            
            uint8_t _pad1a54[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NPC_Observer_Ward because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_NPC_Observer_Ward) == 0x1a58);
    };
};
