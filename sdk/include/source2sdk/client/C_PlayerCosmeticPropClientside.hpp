#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicPropClientside.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_EconItemView;
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
        // Size: 0xc98
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PlayerCosmeticPropClientside : public source2sdk::client::C_DynamicPropClientside
        {
        public:
            std::int32_t m_iPlayerNum; // 0xab8            
            std::int32_t m_iCosmeticType; // 0xabc            
            char m_szProxyTextureName[260]; // 0xac0            
            uint8_t _pad0bc4[0x4]; // 0xbc4
            // m_hProxyTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hProxyTexture;
            char m_hProxyTexture[0x8]; // 0xbc8            
            uint8_t _pad0bd0[0xa0]; // 0xbd0
            bool m_bGeneratedShowcaseProps; // 0xc70            
            uint8_t _pad0c71[0x7]; // 0xc71
            // m_vecShowcaseProps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_PlayerCosmeticPropClientside*> m_vecShowcaseProps;
            char m_vecShowcaseProps[0x18]; // 0xc78            
            source2sdk::client::C_EconItemView* m_pShowcaseItem; // 0xc90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerCosmeticPropClientside because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerCosmeticPropClientside) == 0xc98);
    };
};
