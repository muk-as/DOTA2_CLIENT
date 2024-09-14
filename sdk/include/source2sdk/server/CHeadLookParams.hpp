#pragma once
#include "source2sdk/server/CHeadLookParams__HeadLookPriority_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class INextBotReply;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CHeadLookParams
    {
    public:
        server::CHeadLookParams__HeadLookPriority_t m_LookPriority; // 0x0        
        float m_flLookDuration; // 0x4        
        server::INextBotReply* m_pReplyWhenAimed; // 0x8        
        char* m_pReasonStr; // 0x10        
        bool m_bWaitForSteady; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x3]; // 0x19
        float m_flEaseInTime; // 0x1c        
        
        // Static fields:
        static server::CHeadLookParams &Get_ms_Defaults() {return *reinterpret_cast<server::CHeadLookParams*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CHeadLookParams")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CHeadLookParams, m_LookPriority) == 0x0);
    static_assert(offsetof(CHeadLookParams, m_flLookDuration) == 0x4);
    static_assert(offsetof(CHeadLookParams, m_pReplyWhenAimed) == 0x8);
    static_assert(offsetof(CHeadLookParams, m_pReasonStr) == 0x10);
    static_assert(offsetof(CHeadLookParams, m_bWaitForSteady) == 0x18);
    static_assert(offsetof(CHeadLookParams, m_flEaseInTime) == 0x1c);
    
    static_assert(sizeof(CHeadLookParams) == 0x20);
};
