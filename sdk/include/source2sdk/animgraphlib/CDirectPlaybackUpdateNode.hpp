#pragma once
#include "source2sdk/animgraphlib/CDirectPlaybackTagData.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
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
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDirectPlaybackUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x4]; // 0x68
        bool m_bFinishEarly; // 0x6c        
        bool m_bResetOnFinish; // 0x6d        
        [[maybe_unused]] std::uint8_t pad_0x6e[0x2]; // 0x6e
        // m_allTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CDirectPlaybackTagData> m_allTags;
        char m_allTags[0x18]; // 0x70        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDirectPlaybackUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CDirectPlaybackUpdateNode) == 0x88);
};
