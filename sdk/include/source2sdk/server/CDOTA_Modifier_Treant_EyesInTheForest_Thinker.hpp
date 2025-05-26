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
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Tree;
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
        class CDOTA_Modifier_Treant_EyesInTheForest_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float vision_aoe; // 0x1878            
            uint8_t _pad187c[0x4]; // 0x187c
            source2sdk::server::CDOTA_Tree* m_Tree; // 0x1880            
            // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTree;
            char m_hTree[0x4]; // 0x1888            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x188c            
            bool m_bUpgradedVision; // 0x1890            
            uint8_t _pad1891[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_EyesInTheForest_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Treant_EyesInTheForest_Thinker) == 0x1898);
    };
};
