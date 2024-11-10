#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPathMover;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x588
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CMoverPathNode : public server::CPointEntity
    {
    public:
        Vector m_vInTangentLocal; // 0x4e0        
        Vector m_vOutTangentLocal; // 0x4ec        
        CUtlSymbolLarge m_szParentPathUniqueID; // 0x4f8        
        CUtlSymbolLarge m_szPathNodeParameter; // 0x500        
        entity2::CEntityIOOutput m_OnPassThrough; // 0x508        
        entity2::CEntityIOOutput m_OnPassThroughForward; // 0x530        
        entity2::CEntityIOOutput m_OnPassThroughReverse; // 0x558        
        // m_hMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathMover> m_hMover;
        char m_hMover[0x4]; // 0x580        
        [[maybe_unused]] std::uint8_t pad_0x584[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMoverPathNode because it is not a standard-layout class
    static_assert(sizeof(CMoverPathNode) == 0x588);
};
