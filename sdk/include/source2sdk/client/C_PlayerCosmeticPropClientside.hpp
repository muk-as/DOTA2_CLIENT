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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PlayerCosmeticPropClientside : public source2sdk::client::C_DynamicPropClientside
        {
        public:
            std::int32_t m_iPlayerNum; // 0x_            
            std::int32_t m_iCosmeticType; // 0x_            
            char m_szProxyTextureName[260]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hProxyTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hProxyTexture;
            char m_hProxyTexture[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bGeneratedShowcaseProps; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecShowcaseProps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_PlayerCosmeticPropClientside*> m_vecShowcaseProps;
            char m_vecShowcaseProps[0x_]; // 0x_            
            source2sdk::client::C_EconItemView* m_pShowcaseItem; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerCosmeticPropClientside because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerCosmeticPropClientside) == 0x_);
    };
};
