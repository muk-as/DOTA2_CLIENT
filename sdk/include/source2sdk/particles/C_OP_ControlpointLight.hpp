#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x6d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ControlpointLight : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "initial color bias"
            float m_flScale; // 0x1c0            
            uint8_t _pad01c4[0x48c]; // 0x1c4
            // metadata: MPropertyFriendlyName "light 1 control point"
            std::int32_t m_nControlPoint1; // 0x650            
            // metadata: MPropertyFriendlyName "light 2 control point"
            std::int32_t m_nControlPoint2; // 0x654            
            // metadata: MPropertyFriendlyName "light 3 control point"
            std::int32_t m_nControlPoint3; // 0x658            
            // metadata: MPropertyFriendlyName "light 4 control point"
            std::int32_t m_nControlPoint4; // 0x65c            
            // metadata: MPropertyFriendlyName "light 1 control point offset"
            Vector m_vecCPOffset1; // 0x660            
            // metadata: MPropertyFriendlyName "light 2 control point offset"
            Vector m_vecCPOffset2; // 0x66c            
            // metadata: MPropertyFriendlyName "light 3 control point offset"
            Vector m_vecCPOffset3; // 0x678            
            // metadata: MPropertyFriendlyName "light 4 control point offset"
            Vector m_vecCPOffset4; // 0x684            
            // metadata: MPropertyFriendlyName "light 1 50% distance"
            float m_LightFiftyDist1; // 0x690            
            // metadata: MPropertyFriendlyName "light 1 0% distance"
            float m_LightZeroDist1; // 0x694            
            // metadata: MPropertyFriendlyName "light 2 50% distance"
            float m_LightFiftyDist2; // 0x698            
            // metadata: MPropertyFriendlyName "light 2 0% distance"
            float m_LightZeroDist2; // 0x69c            
            // metadata: MPropertyFriendlyName "light 3 50% distance"
            float m_LightFiftyDist3; // 0x6a0            
            // metadata: MPropertyFriendlyName "light 3 0% distance"
            float m_LightZeroDist3; // 0x6a4            
            // metadata: MPropertyFriendlyName "light 4 50% distance"
            float m_LightFiftyDist4; // 0x6a8            
            // metadata: MPropertyFriendlyName "light 4 0% distance"
            float m_LightZeroDist4; // 0x6ac            
            // metadata: MPropertyFriendlyName "light 1 color"
            Color m_LightColor1; // 0x6b0            
            // metadata: MPropertyFriendlyName "light 2 color"
            Color m_LightColor2; // 0x6b4            
            // metadata: MPropertyFriendlyName "light 3 color"
            Color m_LightColor3; // 0x6b8            
            // metadata: MPropertyFriendlyName "light 4 color"
            Color m_LightColor4; // 0x6bc            
            // metadata: MPropertyFriendlyName "light 1 type 0=point 1=spot"
            bool m_bLightType1; // 0x6c0            
            // metadata: MPropertyFriendlyName "light 2 type 0=point 1=spot"
            bool m_bLightType2; // 0x6c1            
            // metadata: MPropertyFriendlyName "light 3 type 0=point 1=spot"
            bool m_bLightType3; // 0x6c2            
            // metadata: MPropertyFriendlyName "light 4 type 0=point 1=spot"
            bool m_bLightType4; // 0x6c3            
            // metadata: MPropertyFriendlyName "light 1 dynamic light"
            bool m_bLightDynamic1; // 0x6c4            
            // metadata: MPropertyFriendlyName "light 2 dynamic light"
            bool m_bLightDynamic2; // 0x6c5            
            // metadata: MPropertyFriendlyName "light 3 dynamic light"
            bool m_bLightDynamic3; // 0x6c6            
            // metadata: MPropertyFriendlyName "light 4 dynamic light"
            bool m_bLightDynamic4; // 0x6c7            
            // metadata: MPropertyFriendlyName "compute normals from control points"
            bool m_bUseNormal; // 0x6c8            
            // metadata: MPropertyFriendlyName "half-lambert normals"
            bool m_bUseHLambert; // 0x6c9            
            uint8_t _pad06ca[0x4]; // 0x6ca
            // metadata: MPropertyFriendlyName "clamp minimum light value to initial color"
            bool m_bClampLowerRange; // 0x6ce            
            // metadata: MPropertyFriendlyName "clamp maximum light value to initial color"
            bool m_bClampUpperRange; // 0x6cf            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ControlpointLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ControlpointLight) == 0x6d0);
    };
};
