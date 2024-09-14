#pragma once
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x78
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimTagManagerUpdater
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x38]; // 0x0
        // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSmartPtr<animgraphlib::CAnimTagBase>> m_tags;
        char m_tags[0x18]; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x50[0x28];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimTagManagerUpdater, m_tags) == 0x38);
    
    static_assert(sizeof(CAnimTagManagerUpdater) == 0x78);
};
