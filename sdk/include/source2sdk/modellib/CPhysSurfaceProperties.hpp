#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CPhysSurfacePropertiesAudio.hpp"
#include "source2sdk/modellib/CPhysSurfacePropertiesPhysics.hpp"
#include "source2sdk/modellib/CPhysSurfacePropertiesSoundNames.hpp"
#include "source2sdk/modellib/CPhysSurfacePropertiesVehicle.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPhysSurfaceProperties
        {
        public:
            // metadata: MKV3TransferName "surfacePropertyName"
            CUtlString m_name; // 0x_            
            std::uint32_t m_nameHash; // 0x_            
            std::uint32_t m_baseNameHash; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MKV3TransferName "hidden"
            bool m_bHidden; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MKV3TransferName "description"
            CUtlString m_description; // 0x_            
            // metadata: MKV3TransferName "physics"
            source2sdk::modellib::CPhysSurfacePropertiesPhysics m_physics; // 0x_            
            // metadata: MKV3TransferName "vehicleparams"
            source2sdk::modellib::CPhysSurfacePropertiesVehicle m_vehicleParams; // 0x_            
            // metadata: MKV3TransferName "audiosounds"
            source2sdk::modellib::CPhysSurfacePropertiesSoundNames m_audioSounds; // 0x_            
            // metadata: MKV3TransferName "audioparams"
            source2sdk::modellib::CPhysSurfacePropertiesAudio m_audioParams; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_name) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_nameHash) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_baseNameHash) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_bHidden) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_description) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_physics) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_vehicleParams) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_audioSounds) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfaceProperties, m_audioParams) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CPhysSurfaceProperties) == 0x_);
    };
};
