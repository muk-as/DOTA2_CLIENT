#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/TrackOrientationType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPathTrack : public server::CPointEntity
    {
    public:
        server::CPathTrack* m_pnext; // 0x4b8        
        server::CPathTrack* m_pprevious; // 0x4c0        
        server::CPathTrack* m_paltpath; // 0x4c8        
        float m_flRadius; // 0x4d0        
        float m_length; // 0x4d4        
        CUtlSymbolLarge m_altName; // 0x4d8        
        int32_t m_nIterVal; // 0x4e0        
        server::TrackOrientationType_t m_eOrientationType; // 0x4e4        
        entity2::CEntityIOOutput m_OnPass; // 0x4e8        
        
        // Static fields:
        static int32_t &Get_s_nCurrIterVal() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bIsIterating() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CPathTrack")->GetStaticFields()[1]->m_pInstance);};
        
        // Datamap fields:
        // void InputPass; // 0x0
        // void InputEnableAlternatePath; // 0x0
        // void InputDisableAlternatePath; // 0x0
        // void InputToggleAlternatePath; // 0x0
        // void InputEnablePath; // 0x0
        // void InputDisablePath; // 0x0
        // void InputTogglePath; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathTrack because it is not a standard-layout class
    static_assert(sizeof(CPathTrack) == 0x510);
};
