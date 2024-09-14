#pragma once
#include "source2sdk/animlib/CNmSyncTrack__Event_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xb0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmSyncTrack
    {
    public:
        // m_syncEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVectorFixedGrowable<animlib::CNmSyncTrack__Event_t,10> m_syncEvents;
        char m_syncEvents[0xa8]; // 0x0        
        int32_t m_nStartEventOffset; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xac[0x4];
        
        // Static fields:
        static animlib::CNmSyncTrack &Get_s_defaultTrack() {return *reinterpret_cast<animlib::CNmSyncTrack*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNmSyncTrack")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmSyncTrack, m_syncEvents) == 0x0);
    static_assert(offsetof(CNmSyncTrack, m_nStartEventOffset) == 0xa8);
    
    static_assert(sizeof(CNmSyncTrack) == 0xb0);
};
