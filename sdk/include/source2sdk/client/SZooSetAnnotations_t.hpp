#pragma once
#include "source2sdk/client/SZooSetAnnotation_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct SZooSetAnnotations_t
    {
    public:
        CUtlString m_strSetName; // 0x0        
        // m_annotations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SZooSetAnnotation_t> m_annotations;
        char m_annotations[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SZooSetAnnotations_t, m_strSetName) == 0x0);
    static_assert(offsetof(SZooSetAnnotations_t, m_annotations) == 0x8);
    
    static_assert(sizeof(SZooSetAnnotations_t) == 0x20);
};
