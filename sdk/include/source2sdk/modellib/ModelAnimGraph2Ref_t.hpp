#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"

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
        struct ModelAnimGraph2Ref_t
        {
        public:
            CUtlString m_sIdentifier; // 0x_            
            // m_hGraph has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraph;
            char m_hGraph[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::ModelAnimGraph2Ref_t, m_sIdentifier) == 0x_);
        static_assert(offsetof(source2sdk::modellib::ModelAnimGraph2Ref_t, m_hGraph) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::ModelAnimGraph2Ref_t) == 0x_);
    };
};
