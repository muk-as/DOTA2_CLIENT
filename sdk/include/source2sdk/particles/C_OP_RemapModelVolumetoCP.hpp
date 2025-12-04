#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/BBoxVolumeType_t.hpp"
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapModelVolumetoCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "output BBox Type"
            source2sdk::particles::BBoxVolumeType_t m_nBBoxType; // 0x_            
            // metadata: MPropertyFriendlyName "input control point"
            std::int32_t m_nInControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "output max control point"
            // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_MINS_MAXS"
            std::int32_t m_nOutControlPointMaxNumber; // 0x_            
            // metadata: MPropertyFriendlyName "output CP component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
            std::int32_t m_nField; // 0x_            
            // metadata: MPropertyFriendlyName "input volume minimum in cubic units"
            // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
            float m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "input volume maximum in cubic units"
            // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
            float m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
            float m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
            float m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "check full bbox only"
            // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
            bool m_bBBoxOnly; // 0x_            
            // metadata: MPropertyFriendlyName "cube root of volume"
            // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
            bool m_bCubeRoot; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapModelVolumetoCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapModelVolumetoCP) == 0x_);
    };
};
