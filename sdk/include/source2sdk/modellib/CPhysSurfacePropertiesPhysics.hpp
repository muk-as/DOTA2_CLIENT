#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPhysSurfacePropertiesPhysics
        {
        public:
            // metadata: MKV3TransferName "friction"
            float m_friction; // 0x_            
            // metadata: MKV3TransferName "elasticity"
            float m_elasticity; // 0x_            
            // metadata: MKV3TransferName "density"
            float m_density; // 0x_            
            // metadata: MKV3TransferName "thickness"
            float m_thickness; // 0x_            
            // metadata: MKV3TransferName "softcontactfrequency"
            float m_softContactFrequency; // 0x_            
            // metadata: MKV3TransferName "softcontactdampingratio"
            float m_softContactDampingRatio; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_friction) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_elasticity) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_density) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_thickness) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_softContactFrequency) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesPhysics, m_softContactDampingRatio) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CPhysSurfacePropertiesPhysics) == 0x_);
    };
};
