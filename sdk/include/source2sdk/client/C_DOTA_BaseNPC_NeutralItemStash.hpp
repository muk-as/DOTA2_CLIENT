#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DynamicPropClientside;
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
        // Size: 0x1ad0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_NeutralItemStash : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            uint8_t _pad1a88[0x10]; // 0x1a88
            // m_vecNewItemFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecNewItemFX;
            char m_vecNewItemFX[0x18]; // 0x1a98            
            bool m_bHasFoundProps; // 0x1ab0            
            bool m_bDidHaveNewItems; // 0x1ab1            
            uint8_t _pad1ab2[0x6]; // 0x1ab2
            // m_vecProps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_DynamicPropClientside>> m_vecProps;
            char m_vecProps[0x18]; // 0x1ab8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_NeutralItemStash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_NeutralItemStash) == 0x1ad0);
    };
};
