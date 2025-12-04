#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoDynamicShadowHint : public source2sdk::client::C_PointEntity
        {
        public:
            bool m_bDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flRange; // 0x_            
            std::int32_t m_nImportance; // 0x_            
            std::int32_t m_nLightChoice; // 0x_            
            // m_hLight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLight;
            char m_hLight[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoDynamicShadowHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoDynamicShadowHint) == 0x_);
    };
};
