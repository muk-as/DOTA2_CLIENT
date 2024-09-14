#pragma once
#include "source2sdk/animationsystem/CAnimBone.hpp"
#include "source2sdk/animationsystem/CAnimDataChannelDesc.hpp"
#include "source2sdk/animationsystem/CAnimUser.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x78
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimKeyData
    {
    public:
        CBufferString m_name; // 0x0        
        // m_boneArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimBone> m_boneArray;
        char m_boneArray[0x18]; // 0x10        
        // m_userArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimUser> m_userArray;
        char m_userArray[0x18]; // 0x28        
        // m_morphArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CBufferString> m_morphArray;
        char m_morphArray[0x18]; // 0x40        
        int32_t m_nChannelElements; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4]; // 0x5c
        // m_dataChannelArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimDataChannelDesc> m_dataChannelArray;
        char m_dataChannelArray[0x18]; // 0x60        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimKeyData, m_name) == 0x0);
    static_assert(offsetof(CAnimKeyData, m_boneArray) == 0x10);
    static_assert(offsetof(CAnimKeyData, m_userArray) == 0x28);
    static_assert(offsetof(CAnimKeyData, m_morphArray) == 0x40);
    static_assert(offsetof(CAnimKeyData, m_nChannelElements) == 0x58);
    static_assert(offsetof(CAnimKeyData, m_dataChannelArray) == 0x60);
    
    static_assert(sizeof(CAnimKeyData) == 0x78);
};
