#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SZooSetAnnotation_t.hpp"

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
        struct SZooSetAnnotations_t
        {
        public:
            CUtlString m_strSetName; // 0x_            
            // m_annotations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SZooSetAnnotation_t> m_annotations;
            char m_annotations[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SZooSetAnnotations_t, m_strSetName) == 0x_);
        static_assert(offsetof(source2sdk::client::SZooSetAnnotations_t, m_annotations) == 0x_);
        
        static_assert(sizeof(source2sdk::client::SZooSetAnnotations_t) == 0x_);
    };
};
