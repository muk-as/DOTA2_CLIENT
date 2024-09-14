#pragma once
#include "source2sdk/server/CObstructionObject.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x20
    // Has VTable
    // Is Abstract
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Tree : public server::CObstructionObject
    {
    public:
        bool m_bStanding; // 0x18        
        bool m_bSpecialConsume; // 0x19        
        bool m_bSpecialToxic; // 0x1a        
        bool m_bSpecialPathing; // 0x1b        
        uint32_t m_unOccluderID; // 0x1c        
        
        // Static fields:
        static int32_t &Get_s_nNextChangeToken() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CDOTA_Tree")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Tree because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Tree) == 0x20);
};
