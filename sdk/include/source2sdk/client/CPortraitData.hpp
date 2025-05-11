#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBasePortraitData.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe20
        // Has VTable
        #pragma pack(push, 1)
        class CPortraitData : public source2sdk::client::CBasePortraitData
        {
        public:
            // m_RenderList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_RenderList;
            char m_RenderList[0x18]; // 0xdf0            
            // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hHero;
            char m_hHero[0x4]; // 0xe08            
            uint8_t _pad0e0c[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPortraitData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPortraitData) == 0xe20);
    };
};
