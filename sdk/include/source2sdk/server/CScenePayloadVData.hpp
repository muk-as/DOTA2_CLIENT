#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCChoreoSceneResource.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataOverlayType "1"
        // static metadata: MVDataAssociatedFile
        #pragma pack(push, 1)
        class CScenePayloadVData
        {
        public:
            // m_sSceneFile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCChoreoSceneResource>> m_sSceneFile;
            char m_sSceneFile[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CScenePayloadVData, m_sSceneFile) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CScenePayloadVData) == 0x_);
    };
};
