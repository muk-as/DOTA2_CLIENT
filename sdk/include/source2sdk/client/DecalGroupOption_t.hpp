#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct DecalGroupOption_t
        {
        public:
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x_]; // 0x_            
            CGlobalSymbol m_sSequenceName; // 0x_            
            float m_flProbability; // 0x_            
            bool m_bEnableAngleBetweenNormalAndGravityRange; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertySuppressExpr "m_bEnableAngleBetweenNormalAndGravityRange == 0"
            float m_flMinAngleBetweenNormalAndGravity; // 0x_            
            // metadata: MPropertySuppressExpr "m_bEnableAngleBetweenNormalAndGravityRange == 0"
            float m_flMaxAngleBetweenNormalAndGravity; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DecalGroupOption_t, m_hMaterial) == 0x_);
        static_assert(offsetof(source2sdk::client::DecalGroupOption_t, m_sSequenceName) == 0x_);
        static_assert(offsetof(source2sdk::client::DecalGroupOption_t, m_flProbability) == 0x_);
        static_assert(offsetof(source2sdk::client::DecalGroupOption_t, m_bEnableAngleBetweenNormalAndGravityRange) == 0x_);
        static_assert(offsetof(source2sdk::client::DecalGroupOption_t, m_flMinAngleBetweenNormalAndGravity) == 0x_);
        static_assert(offsetof(source2sdk::client::DecalGroupOption_t, m_flMaxAngleBetweenNormalAndGravity) == 0x_);
        
        static_assert(sizeof(source2sdk::client::DecalGroupOption_t) == 0x_);
    };
};
