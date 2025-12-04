#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace modellib
    {
        struct CPhysSurfaceProperties;
    };
};

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
        class CVPhysXSurfacePropertiesList
        {
        public:
            // metadata: MKV3TransferName "SurfacePropertiesList"
            // m_surfacePropertiesList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CPhysSurfaceProperties*> m_surfacePropertiesList;
            char m_surfacePropertiesList[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CVPhysXSurfacePropertiesList, m_surfacePropertiesList) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CVPhysXSurfacePropertiesList) == 0x_);
    };
};
