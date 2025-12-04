#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CBuoyancyHelper
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlStringToken m_nFluidType; // 0x_            
            float m_flFluidDensity; // 0x_            
            float m_flNeutrallyBuoyantGravity; // 0x_            
            float m_flNeutrallyBuoyantLinearDamping; // 0x_            
            float m_flNeutrallyBuoyantAngularDamping; // 0x_            
            bool m_bNeutrallyBuoyant; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecFractionOfWheelSubmergedForWheelFriction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelFriction;
            char m_vecFractionOfWheelSubmergedForWheelFriction[0x_]; // 0x_            
            // m_vecWheelFrictionScales has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecWheelFrictionScales;
            char m_vecWheelFrictionScales[0x_]; // 0x_            
            // m_vecFractionOfWheelSubmergedForWheelDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelDrag;
            char m_vecFractionOfWheelSubmergedForWheelDrag[0x_]; // 0x_            
            // m_vecWheelDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecWheelDrag;
            char m_vecWheelDrag[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pController; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_nFluidType) == 0x_);
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_flFluidDensity) == 0x_);
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_flNeutrallyBuoyantGravity) == 0x_);
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_flNeutrallyBuoyantLinearDamping) == 0x_);
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_flNeutrallyBuoyantAngularDamping) == 0x_);
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_bNeutrallyBuoyant) == 0x_);
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_vecFractionOfWheelSubmergedForWheelFriction) == 0x_);
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_vecWheelFrictionScales) == 0x_);
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_vecFractionOfWheelSubmergedForWheelDrag) == 0x_);
        static_assert(offsetof(source2sdk::client::CBuoyancyHelper, m_vecWheelDrag) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CBuoyancyHelper) == 0x_);
    };
};
